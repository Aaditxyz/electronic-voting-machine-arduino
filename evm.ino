int voteA = 2;
int voteB = 3;
int voteC = 4;
int resetBtn = 5;

int countA = 0;
int countB = 0;
int countC = 0;

void setup() {
  pinMode(voteA, INPUT_PULLUP);
  pinMode(voteB, INPUT_PULLUP);
  pinMode(voteC, INPUT_PULLUP);
  pinMode(resetBtn, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("EVM Ready");
}

void loop() {
  if (digitalRead(voteA) == LOW) {
    countA++;
    delay(300);
  }

  if (digitalRead(voteB) == LOW) {
    countB++;
    delay(300);
  }

  if (digitalRead(voteC) == LOW) {
    countC++;
    delay(300);
  }

  if (digitalRead(resetBtn) == LOW) {
    countA = 0;
    countB = 0;
    countC = 0;
    Serial.println("Votes Reset");
    delay(300);
  }

  Serial.print("A: ");
  Serial.print(countA);
  Serial.print(" | B: ");
  Serial.print(countB);
  Serial.print(" | C: ");
  Serial.println(countC);
}
