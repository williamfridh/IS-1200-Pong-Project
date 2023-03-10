/**
 * @author Fridh, William
*/
#include <stdint.h>

static uint8_t model_font_big[] = {
    /* ======== [BLANK] ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== ! ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== " ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== # (DRAWN AS A CHECKMARK) ======== */
    12, 6, 3, 6, 12, 24, 48, 96,
    /* ======== $ (DRAWN AS A CROWN) ======== */
    126, 58, 30, 114, 114, 30, 58, 126,
    /* ======== % ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== & ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== ' ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== ( ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== ) ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== * ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== + ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== , ======== */
    0, 1, 6, 6, 0, 0, 0, 0,
    /* ======== - ======== */
    0, 8, 8, 8, 8, 8, 8, 0,
    /* ======== . ======== */
    0, 6, 6, 0, 0, 0, 0, 0,
    /* ======== / ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== 0 ======== */
    0, 126, 129, 129, 129, 129, 126, 0,
    /* ======== 1 ======== */
    0, 0, 64, 193, 255, 1, 0, 0,
    /* ======== 2 ======== */
    0, 99, 135, 141, 137, 145, 97, 0,
    /* ======== 3 ======== */
    0, 195, 129, 145, 153, 149, 227, 0,
    /* ======== 4 ======== */
    0, 0, 248, 8, 8, 255, 8, 0,
    /* ======== 5 ======== */
    0, 242, 145, 145, 145, 145, 142, 0,
    /* ======== 6 ======== */
    0, 126, 209, 145, 145, 145, 142, 0,
    /* ======== 7 ======== */
    0, 129, 130, 132, 136, 176, 192, 0,
    /* ======== 8 ======== */
    0, 126, 137, 137, 137, 137, 126, 0,
    /* ======== 9 ======== */
    0, 114, 137, 137, 137, 137, 126, 0,
    /* ======== : ======== */
    0, 0, 51, 51, 0, 0, 0, 0,
    /* ======== ; ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== < ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== = ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== > ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== ? ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== @ ======== */
    0, 0, 0, 0, 0, 0, 0, 0,
    /* ======== A ======== */
    3, 12, 120, 136, 136, 120, 12, 3,
    /* ======== B ======== */
    0, 0, 255, 153, 153, 102, 0, 0,
    /* ======== C ======== */
    0, 60, 66, 129, 129, 66, 0, 0,
    /* ======== D ======== */
    0, 255, 129, 129, 66, 60, 0, 0,
    /* ======== E ======== */
    0, 255, 137, 137, 137, 137, 0, 0,
    /* ======== F ======== */
    0, 255, 144, 144, 144, 128, 0, 0,
    /* ======== G ======== */
    0, 60, 66, 129, 137, 137, 74, 12,
    /* ======== H ======== */
    0, 255, 8, 8, 8, 8, 255, 0,
    /* ======== I ======== */
    0, 0, 129, 255, 255, 129, 0, 0,
    /* ======== J ======== */
    0, 140, 130, 129, 129, 129, 254, 0,
    /* ======== K ======== */
    0, 255, 24, 24, 36, 66, 129, 0,
    /* ======== L ======== */
    0, 255, 1, 1, 1, 1, 0, 0,
    /* ======== M ======== */
    0, 255, 64, 32, 31, 32, 64, 255,
    /* ======== N ======== */
    0, 255, 96, 48, 24, 12, 6, 255,
    /* ======== O ======== */
    60, 102, 195, 129, 129, 195, 102, 60,
    /* ======== P ======== */
    0, 0, 255, 132, 132, 72, 48, 0,
    /* ======== Q ======== */
    60, 66, 129, 129, 129, 66, 62, 3,
    /* ======== R ======== */
    0, 0, 255, 136, 140, 223, 113, 0,
    /* ======== S ======== */
    0, 0, 114, 137, 137, 137, 70, 0,
    /* ======== T ======== */
    0, 128, 128, 128, 255, 128, 128, 128,
    /* ======== U ======== */
    0, 252, 2, 1, 1, 2, 252, 0,
    /* ======== V ======== */
    192, 56, 6, 1, 1, 6, 56, 192,
    /* ======== W ======== */
    0, 255, 2, 12, 16, 12, 2, 255,
    /* ======== X ======== */
    129, 66, 36, 24, 24, 36, 66, 129,
    /* ======== Y ======== */
    0, 192, 32, 16, 15, 16, 32, 192,
    /* ======== Z ======== */
    0, 131, 135, 141, 153, 177, 225, 193,
};

