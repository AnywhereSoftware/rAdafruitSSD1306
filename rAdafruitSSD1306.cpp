#include "B4RDefines.h"

namespace B4R {
	void B4RAdafruitSSD1306::InitializeI2C(Byte RST, Byte I2CAddress) {
		ssd = new (beAdafruit_SSD1306) Adafruit_SSD1306(RST);
		ssd->begin(SSD1306_SWITCHCAPVCC, I2CAddress);
		init();
	}
	void B4RAdafruitSSD1306::InitializeHSPI(Byte DC, Byte RST, Byte CS) {
		ssd = new (beAdafruit_SSD1306) Adafruit_SSD1306(DC, RST, CS);
		ssd->begin();
		init();
	}
	void B4RAdafruitSSD1306::init() {
		gfx.gfx = ssd;
		GFX = &gfx;
		ssd->setTextColor(WHITE);
	}
	void B4RAdafruitSSD1306::Display() {
		ssd->display();
	}
	void B4RAdafruitSSD1306::ClearDisplay() {
		ssd->clearDisplay();
	}
	void B4RAdafruitSSD1306::setInvertDisplay(bool b) {
		ssd->invertDisplay(b);
	}
	void B4RAdafruitSSD1306::StartScrollDiagRight(uint8_t Start, uint8_t Stop) {
		ssd->startscrolldiagright(Start, Stop);
	}
	void B4RAdafruitSSD1306::StartScrollRight(uint8_t Start, uint8_t Stop) {
		ssd->startscrollright(Start, Stop);
	}
	void B4RAdafruitSSD1306::StartScrollDiagLeft(uint8_t Start, uint8_t Stop) {
		ssd->startscrolldiagleft(Start, Stop);
	}
	void B4RAdafruitSSD1306::StartScrollLeft(uint8_t Start, uint8_t Stop) {
		ssd->startscrollleft(Start, Stop);
	}
	void B4RAdafruitSSD1306::StopScroll() {
		ssd->stopscroll();
	}
}