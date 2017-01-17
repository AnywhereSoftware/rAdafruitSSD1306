#pragma once
#include "B4RDefines.h"
#include "Adafruit_SSD1306.h"
#include "rAdafruitGFX.h"
//~version: 1.10
namespace B4R {
	//~shortname: AdafruitSSD1306
	class B4RAdafruitSSD1306 {
		private:
			uint8_t beAdafruit_SSD1306[sizeof(Adafruit_SSD1306)];
			Adafruit_SSD1306* ssd;
			B4RAdafruitGFX gfx;
			void init();
		public:
			//Gets the graphics object. Make sure to call Display to apply the changes.
			B4RAdafruitGFX* GFX;
			//I2C initializer.
			void InitializeI2C(Byte RST, Byte I2CAddress);
			//Hardware SPI initializer.
			void InitializeHSPI(Byte DC, Byte RST, Byte CS);
			//Draws the internal buffer to the screen.
			void Display();
			//Clears the display.
			void ClearDisplay();
			//Set to True to invert the display.
			void setInvertDisplay(bool b);
			//Activates a diagonal scroll for the specified rows.
			//Pass 0, 15 to scroll all rows.
			void StartScrollDiagRight(Byte StartRow, Byte StopRow);
			//Activates a scroll for the specified rows.
			//Pass 0, 15 to scroll all rows.
			void StartScrollRight(Byte StartRow, Byte StopRow);
			//Activates a diagonal scroll for the specified rows.
			//Pass 0, 15 to scroll all rows.
			void StartScrollDiagLeft(Byte StartRow, Byte StopRow);
			//Activates a scroll for the specified rows.
			//Pass 0, 15 to scroll all rows.
			void StartScrollLeft(Byte StartRow, Byte StopRow);
			//Stops scrolling.
			void StopScroll();
			#define /*UInt BLACK;*/ B4RAdafruitSSD1306_BLACK BLACK 
			#define /*UInt WHITE;*/ B4RAdafruitSSD1306_WHITE WHITE 
			//Inverts the current color (similar to XOR drawing).
			#define /*UInt INVERSE;*/ B4RAdafruitSSD1306_INVERSE INVERSE 
	};
}