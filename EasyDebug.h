#ifndef EASYDEBUG_H
#define EASYDEBUG_H

  #ifdef DEBUG
    #define DBprint(...) Serial.print(__VA_ARGS__)
    #define DBprintln(...) Serial.println(__VA_ARGS__)
    #define DEBUG_Begin(...) Serial.begin(__VA_ARGS__)

  #else
    #define DBprint(...)    //a blank line
    #define DBprintln(...)
    #define DEBUG_Begin(...)
	
  #endif  // DEBUG




#endif   // EASYDEBUG_H
