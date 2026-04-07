/*🔄 4. QString ↔ std::string Conversion

Qt uses QString, C++ uses string

🔹 QString → string
QString q = input->text(); **
string s = q.toStdString(); **

🔹 string → QString
string s = "Hello";  **
QString q = QString::fromStdString(s); **

🧠 Use case:

User input → QString
Processing → string
Output → QString
🧠 Mini Example (All Together)

void MainWindow::handleSend() {   **
    QString inputText = input->text(); **

    // Show user message
    chatBox->append("You: " + inputText); **

    // Convert to string
    string s = inputText.toStdString(); **

    // Simple bot reply
    string reply = "You entered: " + s; **

    // Convert back
    QString qReply = QString::fromStdString(reply); **

    chatBox->append("Bot: " + qReply); **

    input->clear(); **
}*/