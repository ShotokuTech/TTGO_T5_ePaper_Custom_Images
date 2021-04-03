#define LILYGO_T5_V213

#include <boards.h>
#include <GxEPD.h>

#include <GxDEPG0213BN/GxDEPG0213BN.h>    // 2.13" b/w  form DKE GROUP
#include GxEPD_BitmapExamples

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

GxIO_Class io(SPI,  EPD_CS, EPD_DC,  EPD_RSET);
GxEPD_Class display(io, EPD_RSET, EPD_BUSY);

void setup()
{
    SPI.begin(EPD_SCLK, EPD_MISO, EPD_MOSI);
    display.init();
    display.setTextColor(GxEPD_BLACK);
    display.setRotation(0);
    display.fillScreen(GxEPD_WHITE);
}

void loop()
{
    display.drawExampleBitmap(BitmapExample1, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
    display.drawExampleBitmap(logo, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
    display.drawExampleBitmap(first, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
    display.drawExampleBitmap(third, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
    display.drawExampleBitmap(BitmapExample2, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
    display.drawExampleBitmap(BitmapExample3, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
    display.update();
    delay(1000);
}
