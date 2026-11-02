#include <SPI.h>
#include <GxEPD2_BW.h>

#define CS_PIN 27
#define DC_PIN 26
#define RST_PIN 8 
#define BUSY_PIN 9
#define NEXT_BTN 4
#define PREV_BTN 3

GxEPD2_BW<GxEPD2_154_D67 , GxEPD2_154_D67::Height> display(GxEPD2_154_D67(CS_PIN, DC_PIN, RST_PIN, BUSY_PIN));

const char book[] = R"BOOK(PASTE BOOK HERE)BOOK"; 
const int booklength = sizeof(book) - 1; 

int charsPerPage = 170; 
int Page = 0 

void showPage() {
  display.init(115200, true, 2, false);
  display.setRotation(0);
  display.setTextSize(2);
  display.setTextColor(GxEPD_BLACK);
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillSceen(GxEPD_WHITE);
    display.setCursor(0, 0);
    int start = page * charsPerPage;
    int end = min(Start + charsPerPage, booklength);
    for (int i = start; i < end; I++){
      display.print(book[i]);
    }
  } while (display.nextPage());
  display.Hibernate();
}

void setup () {
  pinMode(NEXT_BTN, INPUT_PULLUP); 
  pinMode(PREV_BTN, INPUT_PULLUP);
  SPI.setSCK(18);
  SPI.setTX(19); 
  showPage();
}

void loop() {
  if (digitalRead(NEXT_BTN) == LOW) {
    if ((page + 1) * charsPerPage < bookLength) page++; 
    showPage();
    delay(300);
  }
  if (digitalRead(PREV_BTN) == low) {
    if (page > 0) page--;
    showPage();
    delay(300);
  }
}
