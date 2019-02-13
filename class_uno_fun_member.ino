class Counter {
   public:
    Counter::Counter() {count = 10;Serial.println("Object is being created");}
    Counter::~Counter() {count = -10;Serial.println("Object is being deleted");}
    void increment() { count += 1;  }
    void increment(int amount) { count += amount; }
    int reset(void) {
        count = 0;
        return count;
    }
    public: int count = 0;
};
 
void setup() {
  Serial.begin(115200);
  
  Counter c1;
  Counter* c2 = new Counter();
  Counter* c3 = new Counter[2];
  delete [] c3;//有new,就要delete
  Serial.print("c1.increment()=");
  c1.increment();
  Serial.println(c1.count);
  Serial.print("c1.increment(5)=");
  c1.increment(5);
  Serial.println(c1.count);
 
  Serial.print("c1.reset()=");
  
  Serial.println(c1.reset());

}
 
void loop() {}
