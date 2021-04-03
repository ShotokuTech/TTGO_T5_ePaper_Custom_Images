#define LILYGO_T5_V213
#include <boards.h>
#include <GxEPD.h>
#include <GxDEPG0213BN/GxDEPG0213BN.h>    // 2.13" b/w  form DKE GROUP
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
#include GxEPD_BitmapExamples
#include "onea.h"
#include "twoa.h"
#include "threea.h"
#include "foura.h"

GxIO_Class io(SPI,  EPD_CS, EPD_DC,  EPD_RSET);
GxEPD_Class display(io, EPD_RSET, EPD_BUSY);

void setup()
{
    SPI.begin(EPD_SCLK, EPD_MISO, EPD_MOSI);
    display.init();
    display.setRotation(1);
//    display.fillScreen(GxEPD_BLACK);
}

void loop()
{
    display.fillScreen(GxEPD_BLACK);  
    display.drawBitmap(0, 0, threea, 250, 122, 1);
    display.update();
    delay(10000);
    display.fillScreen(GxEPD_BLACK);    
    display.drawBitmap(0, 0, onea, 250, 122, 1);
    display.update();
    delay(10000);
    display.fillScreen(GxEPD_BLACK);    
    display.drawBitmap(0, 0, foura, 250, 122, 1);
    display.update();
    delay(10000);
    display.fillScreen(GxEPD_BLACK);    
    display.drawBitmap(0, 0, twoa, 250, 122, 1);
    display.update();
    delay(10000);
}
