#include <Arduino.h>
#include "OS/OSThreadKernel.h"
#include "serial_communication_handler.hpp"

void lock_detect_thread(void *paremeters){

  pinMode(PB11, INPUT_PULLUP);
  pinMode(PA8, OUTPUT); 
  digitalWrite(PA8, LOW);
  for(;;){
    
    os_thread_sleep_ms(50);
  }
}


void setup() {
  os_init(); 

  // Since we are talking to another device over the serial bus. 
  start_serial_communications();
  _os_yield(); 
}

// Nothing really happens here huh
void loop() {}