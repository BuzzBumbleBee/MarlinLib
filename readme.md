# Vendor Library For Marlin


---
### Overview

* Configuration Files Located in "configurations/{machine_type}/{machine}"
* config_macro.h & config_macro_adv.h inclide the correct config via use of macro

---
### Usage (Arduino IDE)

1) Download Marlin zip from GitHub.

2) Download MarlinLib zip from GitHub.

3) Extract Marlin into working folder.

4) Open marlin.ino in the Arduino IDE.

5) Add MarlinLib (Sketch -> Include Libary -> Add Zip Library)

6) In "Configuration.h" select your board configuration as

>\#define TYPE {machine_type}

>\#define DEVICE {machine}

7) Build & Flash


