/*⚡ 3. Signals & Slots (MOST IMPORTANT 🔥)

👉 Ye Qt ka magic hai

Signal = event (button clicked)
Slot = function jo chalega*/


/*Example: Button click → function run

connect(btn, &QPushButton::clicked, this, &MainWindow::handleSend); **

Function (slot)
void MainWindow::handleSend() { **
    QString text = input->text(); ** 
    chatBox->append("You: " + text); **
}  **

🧠 Samajh simple:

User button dabata hai
Signal generate hota hai
Slot function run hota hai

👉 Yeh hi chatbot ka heart hai 💥*/