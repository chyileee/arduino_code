class TestClass{
  public:
    int x = 1;
    int y = 2;
};
 
void setup() {
  Serial.begin(115200);
 
  TestClass myObject;
 
  Serial.print("member x:");
  Serial.println(myObject.x);
 
  Serial.print("member y:");
  Serial.println(myObject.y);
 
  myObject.x=40;
 
  Serial.print("member x after assignment:");
  Serial.println(myObject.x);
 
}
 
void loop() {}
