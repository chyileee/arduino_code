// first name space
namespace first_space {
   void func() {
       Serial.println("Inside first_space");
   }
}

// second name space
namespace second_space {
   void func() {
      Serial.println("Inside second_space");
   }
}

using namespace second_space;
void setup() {
  Serial.begin(115200);
   // This calls function from first name space.
   first_space::func();
   func();
}
void loop() {}
