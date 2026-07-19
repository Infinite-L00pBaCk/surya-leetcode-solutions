🧠 LeetCode Solutions

Automatically synced from LeetCode via a custom Chrome Extension.

📂 Repository Structure
Solutions are automatically organized by difficulty every time I hit Accepted on LeetCode.


surya-leetcode-solutions/
├── Easy/
│   ├── binary-search/
│   │   └── solution.cpp
│   └── two-sum/
│       └── solution.cpp
├── Medium/
│   └── maximum-product-subarray/
│       └── solution.cpp
└── Hard/


⚙️ How It Works
I built a custom Chrome Extension that:

🔍 Detects when LeetCode navigates to a submission result page.
✅ Verifies the submission is Accepted using LeetCode's internal GraphQL API.
📦 Fetches the full solution code, problem title, and difficulty from the API.
🚀 Pushes the code to this repository under the correct Easy/, Medium/, or Hard/ folder.
📝 Updates this README.md automatically with a new entry in the table below.

🚀 Getting Started (Extension Setup)
Want to replicate this setup? Here's how:

Clone the extension from its source repository.
Go to chrome://extensions/ and enable Developer Mode.
Click Load Unpacked and select the extension folder.
Click the extension icon, enter your GitHub PAT (repo scope required) and your repository name.
Click Save — you're done! Start solving problems.


## 📊 Solved Problems

| Difficulty | Problem | Solution |
|:---:|---|---|
| 🟢 Easy | [Binary Search](https://leetcode.com/problems/binary-search/) | [View Solution](Easy/binary-search/solution.cpp) |
| 🟢 Easy | [Two Sum](https://leetcode.com/problems/two-sum/) | [View Solution](Easy/two-sum/solution.cpp) |
| 🟡 Medium | [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/) | [View Solution](Medium/maximum-product-subarray/solution.cpp) |
