[![GitHub repo size in bytes](https://img.shields.io/github/repo-size/badges/shields.svg)](https://github.com/SergiuToporjinschi/SketchLogger)
[![GitHub last commit](https://img.shields.io/github/last-commit/SergiuToporjinschi/SketchLogger.svg)](https://github.com/SergiuToporjinschi/SketchLogger/commits/master)
[![GitHub stars](https://img.shields.io/github/stars/SergiuToporjinschi/SketchLogger.svg)](https://github.com/SergiuToporjinschi/SketchLogger/stargazers)
[![GitHub watchers](https://img.shields.io/github/watchers/SergiuToporjinschi/SketchLogger.svg)](https://github.com/SergiuToporjinschi/SketchLogger/watchers)
[![GitHub license](https://img.shields.io/github/license/SergiuToporjinschi/SketchLogger.svg)](https://github.com/SergiuToporjinschi/SketchLogger/blob/master/LICENSE)
[![Code Climate](https://codeclimate.com/github/codeclimate/codeclimate/badges/gpa.svg)](https://codeclimate.com/github/SergiuToporjinschi/SketchLogger)
[![Build Status](https://travis-ci.org/SergiuToporjinschi/SketchLogger.svg?branch=master)](https://travis-ci.org/SergiuToporjinschi/SketchLogger)

# Sketch Logger

Logging system for sketches

# Dependency 
- none
# Macros
* `DEBUGGER` if defined, will output the text which calls `DBGLN`;
* `DEBUGGER_SHORT_FILENAME` if defined, the file path will be replaced with just the file name;
# Examples
Using debugger in a lib can be used just by including `debug_macro.h` in cpp file
Setting the debugger in main file

```cpp
#include "debug_macro.h" //Include macros
#ifdef DEBUGGER 
Print *dbg = &Serial; // we need to define this as global to be used by debug name space
#endif

void setup() {
  Serial.begin(74880); //initialize serial 
  dbg = &Serial; //assign serial to dbg variable

  char x = 't';
  DBGLN("test: %c", x); //src\main.cpp(32): test: t 
}

void loop() {
  delay(1000);
  DBGLN("debug Line"); //src\main.cpp(37): debug Line
}
```