/* 
 * Z1FFER v≤0.2.x Avalanche Noise Based True Random Number Generator
 * Circuit: http://www.openrandom.org/resources/avalanche/circuit
 * Parts List:http://www.openrandom.org/resources/avalanche/diy.md
 * How it Works: http://www.openrandom.org/resources/avalanche/how_it_works.md
 * Arduino code by: James Grover & Jonathan Grover <hello@jonathangrover.com>
 * Used in artwork: https://jonathangrover.com
*/

#define GEN_RND_PIN 2 // Digital pin 2 connected to the output of the noise avalanche circuit.
#define NUM_BITS 10  // specifies number of bits to combine. 
// Ex: If NUM_BITS is 10 then lookup the 10th number in the chart below 
// to see the max number of the range in this case it is 1024 a range of (0 to 1024)
// powers of two: 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536

unsigned int rnd = 0; // define global placeholder to access changing random number

int z1fferRandom() {
  rnd = 0; // reset back to zero before next conversion
  for (int i = 0; i < NUM_BITS; i++){ // loop and collect and combine bits
    rnd = (rnd<<1)|digitalRead(GEN_RND_PIN); // by bitwise operators
    delay(10);
  }
  return rnd;
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(z1fferRandom());
}
