#define WAIT_TIME     (1000) // [ms]

int count = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() 
{
  char txt[256];
  Serial.print(txt);
  count ++;

  if (count < 101) {
    sprintf(txt, "%d: ", count);
    if(count % 3 == 0) {
      Serial.print("Buzz\n");
        }
    else if(count % 5 == 0) {
      Serial.print("FIZZ\n");
        }
    else if(count % 15 == 0) {
      Serial.print("FIzzBuzz\n");
        }
    else {
      Serial.print("\n");
    }
  }
  
  delay(WAIT_TIME);

}
