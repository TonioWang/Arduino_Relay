// Define the digital pins connected to the relay module inputs
const int RELAY1_PIN = 2;
const int RELAY2_PIN = 3;
const int RELAY3_PIN = 4;
const int RELAY4_PIN = 5;
const int RELAY5_PIN = 6;
const int RELAY6_PIN = 7;
const int RELAY7_PIN = 8;
const int RELAY8_PIN = 9;

String inputs;

void setup() {
  Serial.begin(9600);  //Set rate for communicating with phone
  // Initialize all relay control pins as outputs
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
  pinMode(RELAY4_PIN, OUTPUT);
  pinMode(RELAY5_PIN, OUTPUT);
  pinMode(RELAY6_PIN, OUTPUT);
  pinMode(RELAY7_PIN, OUTPUT);
  pinMode(RELAY8_PIN, OUTPUT);

  // Initially, turn off all relays
  digitalWrite(RELAY1_PIN, LOW);
  digitalWrite(RELAY2_PIN, LOW);
  digitalWrite(RELAY3_PIN, LOW);
  digitalWrite(RELAY4_PIN, LOW);
  digitalWrite(RELAY5_PIN, LOW);
  digitalWrite(RELAY6_PIN, LOW);
  digitalWrite(RELAY7_PIN, LOW);
  digitalWrite(RELAY8_PIN, LOW);
}

void loop() {
  while (Serial.available())  //Check if there are available bytes to read
  {
    delay(10);               //Delay to make it stable
    char c = Serial.read();  //Conduct a serial read
    if (c == '#') {
      break;  //Stop the loop once # is detected after a word
    }
    inputs += c;  //Means inputs = inputs + c

    if (inputs.length() > 0) {
      Serial.println(inputs);

      if (inputs == "A") {
        digitalWrite(RELAY1_PIN, LOW);
      } else if (inputs == "a") {
        digitalWrite(RELAY1_PIN, HIGH);
      } else if (inputs == "B") {
        digitalWrite(RELAY2_PIN, LOW);
      } else if (inputs == "b") {
        digitalWrite(RELAY2_PIN, HIGH);
      } else if (inputs == "C") {
        digitalWrite(RELAY3_PIN, LOW);
      } else if (inputs == "c") {
        digitalWrite(RELAY3_PIN, HIGH);
      } else if (inputs == "D") {
        digitalWrite(RELAY4_PIN, LOW);
      } else if (inputs == "d") {
        digitalWrite(RELAY4_PIN, HIGH);
      } else if (inputs == "E") {
        digitalWrite(RELAY5_PIN, LOW);
      } else if (inputs == "e") {
        digitalWrite(RELAY5_PIN, HIGH);
      } else if (inputs == "F") {
        digitalWrite(RELAY6_PIN, LOW);
      } else if (inputs == "f") {
        digitalWrite(RELAY6_PIN, HIGH);
      } else if (inputs == "G") {
        digitalWrite(RELAY7_PIN, LOW);
      } else if (inputs == "g") {
        digitalWrite(RELAY7_PIN, HIGH);
      } else if (inputs == "H") {
        digitalWrite(RELAY8_PIN, LOW);
      } else if (inputs == "h") {
        digitalWrite(RELAY8_PIN, HIGH);
      }
      inputs = "";
    }
  }
}

void testab() {
  // Example: Toggle relays on and off in sequence

  // Turn on relay 1
  digitalWrite(RELAY7_PIN, HIGH);
  delay(1000);  // Wait for 1 second

  // Turn off relay 1
  digitalWrite(RELAY7_PIN, LOW);
  delay(1000);  // Wait for 1 second

  // Turn on relay 2
  digitalWrite(RELAY8_PIN, HIGH);
  delay(1000);  // Wait for 1 second
  // Turn off relay 2

  // Turn on relay 2
  digitalWrite(RELAY8_PIN, LOW);
  delay(1000);  // Wait for 1 second
  // Turn off relay 2

  // Turn on relay 2
  digitalWrite(RELAY6_PIN, HIGH);
  delay(1000);  // Wait for 1 second
  // Turn off relay 2

  // Turn on relay 2
  digitalWrite(RELAY6_PIN, LOW);
  delay(1000);  // Wait for 1 second
  // Turn off relay 2
}
