# Z1FFER v≤0.2.x Avalanche Noise Based True Random Number Generator

## Explanation

This is a true random number generator to be used with Arduino. While working with Arduino in art projects I would often want to generate a random number and I noticed that the built in 'random()' function is actually pseudo random and often kept repeating the same 12 or so numbers over and over again. providing a seed number for variety would simply shift to a different 12 or so numbers and was definitely not enough to make a unique experience for the audience of our work. Often we would use touch sensors to trigger a bank of audio samples, but when the interaction triggers the same 12 or so samples over and over the audience was unable to experience the hundreds of carefully selected samples we had available. After much research I discovered that although computers are very good at following instructions and doing math, they are quite bad at creating true random numbers. In fact there is an entire area of computer science dedicated to solving the random number issue. To accomplish true randomness you need something organic; a natural phenomenon observable in nature and then measure this and translate to a number. Some solutions have been things like measuring the radioactive decay of molecules, shooting video of smoke moving in the wind, or measuring changing weather from different weather stations throughout the world. None of these are practical or portable solutions for use in an art project. Fortunately we can combine a few electrical components together to achieve randomness in a small footprint that only requires we feed our circuit a bit of electricity and watch the behavior of electrons moving through the circuit. The basic premise is that we use noise created by transistors. To use the water analogy where electrons are water.. Transistors act like gates of a damn opening and closing different amounts to let more or less water (electrons) through. If we reverse the current through the transistor as we cycle back and forth charging up and down stored electricity, some electrons will get sucked through the gate and this is measurable effect. Also as electrons are moving by the stored up pile of other electrons by chance they may run into each other sticking to each other and pulling more electrons through the gate with them. As the pile of electrons behind the gate is increased and decreased its unpredictable how many electrons will get stuck together and how many will pass through the gate. This is like the way snow packs together causing other snow to get pulled down the mountain with it, hence the term avalanche noise. For more detailed explantion with diagrams check the link below.

## Resources

Circuit: http://www.openrandom.org/resources/avalanche/circuit
Parts List:http://www.openrandom.org/resources/avalanche/diy.md
How it Works: http://www.openrandom.org/resources/avalanche/how_it_works.md
Arduino code by: James Grover & Jon Grover <hello@jonathangrover.com>
Used in artwork: https://jonathangrover.com
Microcontroller: Arduino.cc
Parts from: Mouser.com

## License

Copyright © 2022 Jonathan Grover

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.