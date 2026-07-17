# JS++
A single-header preprocessor JavaScript transpiler for c++.

## Use-Cases
- Make JavaScript code run fast for once
- Confusing your co-workers and syntax highlighter
- Memory leaks and confusing type coercion in one!

## Usage
Include the line

```
#include "js++.hpp"
```

at the beginning of almost any (see next section) JavaScript program. The program can then be compiled as c++23.
For technical reasons, we must also include a single closing brace `}` at the end of the program.

Don't forget to explicitly mention what language the compiler should expect... Using the g++ compiler:

```
g++ -x c++ --std=c++23 -o out app.js
```

## Features
The following JavaScript features are supported:
- Variable definitions with `let` and `var` (both block-scoped)
- Named function expressions `const f = function(...) { ... } ` with up to 4 (yes, that many!) arguments
- For- and while-loops, if/else statements.
- All operations that are similar in c++ (note that only the `==` comparison is supported, who even uses the other one?)
- Printing using `console.log(...)`
- String and Array objects (but only constructed explicitly with the `new` keyword, of course)

See example.js for inspiration...

## Known Bugs
Probably anything that is not explicitly listed as working above...
