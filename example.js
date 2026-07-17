
#include "js++.hpp"

let arr = new Array(1,2,3);

const foo = function(value) {
    return value;
};

const say = function(str) {
    console.log(str);
};

const add = function(a, b) {
    return a + b;
};

say(add(3, 8));

let s = new String("test");
say(s.length);

arr[2] = 7;
say(arr[2]);

for (let i = 1; i <= 100; i++) {
    if (i % 15 == 0) {
        console.log("FizzBuzz");
    } else if (i % 3 == 0) {
        console.log("Fizz");
    } else if (i % 5 == 0) {
        console.log("Buzz");
    } else {
        console.log(i);
    }
}


} // for technical reasons, all js++ programs must end in a lone closing brace
