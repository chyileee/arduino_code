class TestClass{
  public:
    int x = 1;
    int y = 2;
};
struct modes
{
  unsigned int others : 1;  
  unsigned int group  : 3;  
  unsigned int user   : 5;  
  unsigned int type   : 7;  
}tbits;
//modes tbits;

union Number{
  long int tlong;
  int tint;
  char tchar;
  struct modes
  {
    unsigned int others : 1;  
    unsigned int group  : 3;  
    unsigned int user   : 5;  
    unsigned int type   : 7;  
  }tbits;
  //modes tbits;
};
Number N1;
//=============================
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
  N1.tbits.others = 1;  //1-bit
  N1.tbits.group = 6;   //3-bit
  N1.tbits.user = 15;   //5-bit
  N1.tbits.type = 10;   //7-bit
  Serial.print("sizeof(tlong):");  Serial.println(sizeof(N1.tlong));
  Serial.print("sizeof(tint):");  Serial.println(sizeof(N1.tint));
  Serial.print("Number.tlong:");  Serial.println(N1.tlong,BIN);
  Serial.print("Number.tint:");  Serial.println(N1.tint);
  Serial.print("Number.tchar:");  Serial.println(N1.tchar,HEX);
  Serial.print("Number.tbits:");  Serial.println(N1.tbits.type );
  N1.tlong=0xe123457f;
  Serial.print("Number.tlong:");  Serial.println(N1.tlong,BIN);
  Serial.print("Number.tint:");  Serial.println(N1.tint);
  Serial.print("Number.tchar:");  Serial.println(N1.tchar,HEX);
  Serial.print("N1.tbits.others:");  Serial.println(N1.tbits.others );
  Serial.print("N1.tbits.group:");  Serial.println(N1.tbits.group );
  Serial.print("N1.tbits.user:");  Serial.println(N1.tbits.user );
  Serial.print("N1.tbits.type:");  Serial.println(N1.tbits.type );
}
 
void loop() {}
