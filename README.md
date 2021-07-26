# competitiveCoding

Soft build cmd: `g++ -std=c++17 -Wshadow -Wall -o -O2 -Wno-unused-result -DONPC "%e" "%f"` 

Hard build cmd: `g++ -std=c++17 -Wshadow -Wall -o  -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG -DONPC "%e" "%f"`
