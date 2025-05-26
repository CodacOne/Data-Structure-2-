# 🧠 مشروع هياكل البيانات - الجزء الثاني 

يتضمن هذا المستودع مجموعة من التمارين البرمجية التي قمت بتنفيذها ضمن كورس "هياكل البيانات" مع المبرمج **أبو هدهود**، باستخدام لغة C#. يركز المشروع على فهم وتطبيق المفاهيم الأساسية والعمليات المتقدمة على هياكل البيانات التالية:

- المكدس `Stack`
- الطابور `Queue`
- القائمة `List` (بما في ذلك القوائم المرتبطة Linked Lists)

---

## ✅ المفاهيم والعمليات التي تم تنفيذها

### 1️⃣ المكدس (Stack)
- تم تنفيذ مبدأ **LIFO** (آخر من يدخل، أول من يخرج).
- العمليات:
  - `Push`: إضافة عنصر إلى أعلى المكدس.
  - `Pop`: إزالة العنصر الأعلى.
  - `Peek`: عرض العنصر دون حذفه.
  - استخدام **مصفوفة ديناميكية** لتوسيع حجم المكدس تلقائيًا.

---

### 2️⃣ الطابور (Queue)
- تم تنفيذ مبدأ **FIFO** (أول من يدخل، أول من يخرج).
- العمليات:
  - `Enqueue`: إدخال عنصر في نهاية الطابور.
  - `Dequeue`: إزالة العنصر من البداية.
  - `Peek`: عرض أول عنصر.
  - إدارة المؤشرات الأمامية والخلفية بكفاءة.

---

### 3️⃣ القوائم (List)
- تم العمل على القوائم كـ:
  - قائمة بسيطة باستخدام `List<T>` من C#.
  - قائمة مرتبطة يدويًا باستخدام `Nodes`.
- العمليات:
  - إضافة عنصر في البداية (`InsertFirst`)
  - إضافة في المنتصف أو بعد عنصر معين (`InsertAfter`)
  - حذف عنصر محدد (`DeleteNode`)
  - البحث عن عنصر (`Search`)
  - الطباعة والعرض التسلسلي للعناصر.
- استخدمت **العقد (Nodes)** لتمثيل العناصر وربطها معًا يدويًا.
- تم استخدام **مصفوفة ديناميكية** في بعض الأمثلة لتوضيح مرونة البنية.

---

## 📁 محتويات المشروع

- `StackExample.cs` – تمارين وشرح عملي للمكدس.
- `QueueExample.cs` – تمارين وشرح عملي للطابور.
- `ListExample.cs` – تطبيقات شاملة على القوائم.
- جميع الملفات تحتوي على تعليقات توضيحية لشرح الكود.

---

## 🎯 الهدف من المشروع

يهدف هذا المشروع إلى:
- تعزيز الفهم العملي لهياكل البيانات الأساسية.
- التدرب على كتابة بنى مرنة وقابلة للتوسعة.
- التمهيد لمفاهيم متقدمة مثل القوائم المزدوجة والمكدسات التبادلية.

---



# 🧠 Data Structures Project - 

This repository contains C# practical implementations developed during the **Data Structures** course with instructor **Abu Hadhoud**. The focus is on understanding and applying key operations on:

- Stack
- Queue
- List (including manual Linked List implementation)

---

## ✅ Concepts and Operations Covered

### 1️⃣ Stack
- Implemented using **LIFO** (Last-In, First-Out) principle.
- Key operations:
  - `Push`: Add an item to the top.
  - `Pop`: Remove the top item.
  - `Peek`: View the top item without removing it.
  - Used a **dynamic array** to auto-resize the stack.

---

### 2️⃣ Queue
- Follows the **FIFO** (First-In, First-Out) model.
- Key operations:
  - `Enqueue`: Add an item to the end.
  - `Dequeue`: Remove the item at the front.
  - `Peek`: View the front item.
  - Efficiently managed `front` and `rear` indices.

---

### 3️⃣ List
- Implemented in two ways:
  - Using `List<T>` from C#.
  - Custom **Linked List** with manual `Node` classes.
- Operations:
  - `InsertFirst`: Add an item at the beginning.
  - `InsertAfter`: Add an item after a specific node.
  - `DeleteNode`: Remove a specific item.
  - `Search`: Find an item by value.
  - Traversal and printing of the list elements.
- Utilized **Nodes** to simulate pointer-based connections.
- Used **dynamic arrays** for flexible list management.

---

## 📁 Project Contents

- `StackExample.cs` – Exercises and explanations for Stack.
- `QueueExample.cs` – Practical Queue implementations.
- `ListExample.cs` – Full examples on various List types.
- Each file includes comments for learning and clarity.

---

## 🎯 Project Purpose

This project aims to:
- Deepen understanding of essential data structures.
- Practice hands-on implementation in C#.
- Prepare for more complex structures like Trees or Graphs.

---




