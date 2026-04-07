/*What is QTextEdit?

👉 Simple words:

Ek bada text box jahan multiple lines show hoti hain

📌 In your chatbot:

Ye screen hai jahan chat dikh rahi hai
Like WhatsApp ka chat area
🎯 What does it store?
** represents that this line is line of code and shud be written in same way in qtcreator
It stores chat history, matlab:

Bot: Hello!
You: fever cough
Bot: Possible condition: Flu

👉 Ye sab lines QTextEdit ke andar store hoti hain
means chat ki history Qtextedit store karta hai*/
/*
QTextEdit *chatBox = new QTextEdit(); **
//Ek chat box bana rahe ho memory mein
chatBox->setReadOnly(true); **
/*👉 Kyun?

User ko yahan type nahi karna
Ye sirf display ke liye hai
//ADDING MESSAGES(use APPEND() )

//matlab hum apne chatbot aur hamare beech jo convo rhi hai ussmein kuch add karna jaise chatbot user se\
//kuch puch rha hai and user ne kuch reply kiya toh woh neeche aa jayega aur chat history mein append() ke
//through add hoga
chatBox->append("Bot: Hello!"); **
chatBox->append("You: fever"); **
chatBox->append("Bot: You may have flu"); **
/*👉 Output:

Bot: Hello!
You: fever
Bot: You may have flu

🧠 Samajh:

append() = new line add karta hai, new messages add karna to chat history 
Har baar neeche likhta hai*/ 


/*QLineEdit (Input Box)

👉 Ye single-line input hota hai

QLineEdit *input = new QLineEdit(); **
QString text = input->text(); // user ka input lena **

🧠 Samajh:

User yahan symptoms likhega*/



/*QPushButton (Button)

👉 Click karne ke liye button

QPushButton *btn = new QPushButton("Send");*/



/*🧱 2. Layouts (UI Arrange karna)
🔹 QVBoxLayout (Vertical)

👉 Sab cheezein upar se neeche

QVBoxLayout *layout = new QVBoxLayout(); **
layout->addWidget(chatBox); **
layout->addWidget(input); **
layout->addWidget(btn); **


🔹 QHBoxLayout (Horizontal)

👉 Side by side

QHBoxLayout *layout = new QHBoxLayout(); **
layout->addWidget(input); **
layout->addWidget(btn); **


💡 Combo (Best UI)
QVBoxLayout *mainLayout = new QVBoxLayout();  **
QHBoxLayout *bottomLayout = new QHBoxLayout();  **

bottomLayout->addWidget(input); **
bottomLayout->addWidget(btn);  **
 
mainLayout->addWidget(chatBox);  **
mainLayout->addLayout(bottomLayout);  **

👉 Chat upar, input + button neeche (like WhatsApp)*/

