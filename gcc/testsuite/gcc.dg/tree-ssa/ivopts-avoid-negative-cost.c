/* { dg-do compile } */
/* { dg-options "-O2 -fno-tree-loop-distribute-patterns -fdump-tree-ivopts-details" } */

typedef unsigned char e_u8;
typedef signed short e_s16;

void
convolutionalEncode (
    e_u8 *DataBits,
    e_s16 DataByteSize,
    e_s16 NumberCodeVectors,
    e_s16 ConstraintLength,
    e_u8 (*CodeMatrix)[2],
    e_u8 *BranchWords
)
{
    e_s16 SRIndex;
    e_s16 BWIndex;
    e_s16 DIndex;
    e_s16 CVIndex;
    e_u8 ShiftRegister[8];

    BWIndex = 0;

    for (DIndex = 0; DIndex < DataByteSize; DIndex++) {
        for (SRIndex = ConstraintLength-1; SRIndex > 0; SRIndex--) {
            ShiftRegister[SRIndex] = ShiftRegister[SRIndex-1];
        }

        for (CVIndex = 0; CVIndex < NumberCodeVectors; CVIndex++) {
            BranchWords[BWIndex] = 0;

            for (SRIndex = 0; SRIndex < ConstraintLength; SRIndex++) {
                if ( CodeMatrix[SRIndex][CVIndex] ) {
                    BranchWords[BWIndex] ^= ShiftRegister[SRIndex];
                }
            }

            BWIndex++;
        }
    }
}

/* { dg-final { scan-tree-dump-not "cost=\\\(-1,0\\\)" "ivopts" } } */
