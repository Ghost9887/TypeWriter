## Typewriter effect for strings

## Features
- Just a typewriter effect

## Example
```
#include "typewriter.h"

int main() {
    std::string str { "This is a test" };
    float pause_duration { 0.1f };

    typewriter_effect(str, pause_duration);
    return 0;
}
```
