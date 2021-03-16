#include <stdint.h>
typedef uint32_t Uint32;



void initScore(bool rtl);



int getScoreHeight();



// draws score in upper-right corner of image
void drawScore( Uint32 *inImage, int inWidth, int inHeight, int inScore, bool rtl );



void destroyScore();
