cmake_minimum_required(VERSION 3.28)
project(COP3530_Edugator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories("1. Shorts")
include_directories("1. Shorts/modset")
include_directories("1. Shorts/modset/src")
include_directories("1. Shorts/modset/test-unit")
include_directories("1. Shorts/sortable")
include_directories("1. Shorts/sortable/src")
include_directories("1. Shorts/sortable/test-unit")
include_directories("1. Shorts/stack_flip")
include_directories("1. Shorts/stack_flip/src")
include_directories("1. Shorts/stack_flip/test-unit")
include_directories("10. Dynamic Programming")
include_directories("10. Dynamic Programming/exploring_swamp")
include_directories("10. Dynamic Programming/exploring_swamp/src")
include_directories("10. Dynamic Programming/exploring_swamp/test-unit")
include_directories("2. C++")
include_directories("2. C++/are_permutations")
include_directories("2. C++/are_permutations/src")
include_directories("2. C++/are_permutations/test-unit")
include_directories("2. C++/suffix_count")
include_directories("2. C++/suffix_count/src")
include_directories("2. C++/suffix_count/test-unit")
include_directories("3. Lists Stacks and Queue")
include_directories("3. Lists Stacks and Queue/image_encryptor")
include_directories("3. Lists Stacks and Queue/image_encryptor/src")
include_directories("3. Lists Stacks and Queue/image_encryptor/test")
include_directories("3. Lists Stacks and Queue/interquartile_range")
include_directories("3. Lists Stacks and Queue/interquartile_range/src")
include_directories("3. Lists Stacks and Queue/interquartile_range/test-unit")
include_directories("4. Trees")
include_directories("4. Trees/sum_of_level")
include_directories("4. Trees/sum_of_level/src")
include_directories("4. Trees/sum_of_level/test-unit")
include_directories("5. Heaps")
include_directories("5. Heaps/extract_max")
include_directories("5. Heaps/extract_max/src")
include_directories("5. Heaps/extract_max/test-unit")
include_directories("6. Sets and Maps")
include_directories("6. Sets and Maps/degree_of_string")
include_directories("6. Sets and Maps/degree_of_string/src")
include_directories("6. Sets and Maps/degree_of_string/test-unit")
include_directories("6. Sets and Maps/find_digits")
include_directories("6. Sets and Maps/find_digits/src")
include_directories("6. Sets and Maps/find_digits/test-unit")
include_directories("6. Sets and Maps/four_digits")
include_directories("6. Sets and Maps/four_digits/src")
include_directories("6. Sets and Maps/four_digits/test-unit")
include_directories("7. Graphs")
include_directories("7. Graphs/hidden_gator")
include_directories("7. Graphs/hidden_gator/src")
include_directories("7. Graphs/hidden_gator/test-unit")
include_directories("7. Graphs/not_so_simple_graph")
include_directories("7. Graphs/not_so_simple_graph/src")
include_directories("7. Graphs/not_so_simple_graph/test-unit")
include_directories("7. Graphs/valid_path")
include_directories("7. Graphs/valid_path/src")
include_directories("7. Graphs/valid_path/test-unit")
include_directories("8. Graph Algorithms")
include_directories("8. Graph Algorithms/andrewfied_dijkstra")
include_directories("8. Graph Algorithms/andrewfied_dijkstra/src")
include_directories("8. Graph Algorithms/andrewfied_dijkstra/test-unit")
include_directories("8. Graph Algorithms/maze_escape")
include_directories("8. Graph Algorithms/maze_escape/src")
include_directories("8. Graph Algorithms/maze_escape/test-unit")
include_directories("9. Greedy Algorithms")

add_executable(COP3530_Edugator
        .idea/.gitignore
        .idea/COP3530_Edugator.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        "1. Shorts/modset/src/modset.h"
        "1. Shorts/modset/test-unit/catch.hpp"
        "1. Shorts/modset/test-unit/test.cpp"
        "1. Shorts/sortable/src/cop3530_10_3.h"
        "1. Shorts/sortable/test-unit/catch.hpp"
        "1. Shorts/sortable/test-unit/test.cpp"
        "1. Shorts/stack_flip/src/cop3530_10_1.h"
        "1. Shorts/stack_flip/test-unit/catch.hpp"
        "1. Shorts/stack_flip/test-unit/test.cpp"
        "10. Dynamic Programming/exploring_swamp/src/cop3530_9_1.h"
        "10. Dynamic Programming/exploring_swamp/test-unit/catch.hpp"
        "10. Dynamic Programming/exploring_swamp/test-unit/test.cpp"
        "2. C++/are_permutations/src/cop3530_1_2.h"
        "2. C++/are_permutations/test-unit/catch.hpp"
        "2. C++/are_permutations/test-unit/test.cpp"
        "2. C++/suffix_count/src/suffix_count.h"
        "2. C++/suffix_count/test-unit/catch.hpp"
        "2. C++/suffix_count/test-unit/test.cpp"
        "3. Lists Stacks and Queue/image_encryptor/src/quiz3.h"
        "3. Lists Stacks and Queue/image_encryptor/test/catch.hpp"
        "3. Lists Stacks and Queue/image_encryptor/test/test.cpp"
        "3. Lists Stacks and Queue/interquartile_range/src/interquartile_range.h"
        "3. Lists Stacks and Queue/interquartile_range/test-unit/catch.hpp"
        "3. Lists Stacks and Queue/interquartile_range/test-unit/test.cpp"
        "4. Trees/sum_of_level/src/sum_of_level.h"
        "4. Trees/sum_of_level/test-unit/catch.hpp"
        "4. Trees/sum_of_level/test-unit/test.cpp"
        "5. Heaps/extract_max/src/extract_max.h"
        "5. Heaps/extract_max/test-unit/catch.hpp"
        "5. Heaps/extract_max/test-unit/test.cpp"
        "6. Sets and Maps/degree_of_string/src/cop3530_5_2.h"
        "6. Sets and Maps/degree_of_string/test-unit/catch.hpp"
        "6. Sets and Maps/degree_of_string/test-unit/test.cpp"
        "6. Sets and Maps/find_digits/src/find_digits.h"
        "6. Sets and Maps/find_digits/test-unit/catch.hpp"
        "6. Sets and Maps/find_digits/test-unit/test.cpp"
        "6. Sets and Maps/four_digits/src/four_digits.h"
        "6. Sets and Maps/four_digits/test-unit/catch.hpp"
        "6. Sets and Maps/four_digits/test-unit/test.cpp"
        "7. Graphs/hidden_gator/src/hidden_gator.h"
        "7. Graphs/hidden_gator/test-unit/catch.hpp"
        "7. Graphs/hidden_gator/test-unit/test.cpp"
        "7. Graphs/not_so_simple_graph/src/not_so_simple_graph.h"
        "7. Graphs/not_so_simple_graph/test-unit/catch.hpp"
        "7. Graphs/not_so_simple_graph/test-unit/test.cpp"
        "7. Graphs/valid_path/src/valid_path.h"
        "7. Graphs/valid_path/test-unit/catch.hpp"
        "7. Graphs/valid_path/test-unit/test.cpp"
        "8. Graph Algorithms/andrewfied_dijkstra/src/andrewfied_dijkstra.h"
        "8. Graph Algorithms/andrewfied_dijkstra/test-unit/catch.hpp"
        "8. Graph Algorithms/andrewfied_dijkstra/test-unit/test.cpp"
        "8. Graph Algorithms/maze_escape/src/maze_escape.h"
        "8. Graph Algorithms/maze_escape/test-unit/catch.hpp"
        "8. Graph Algorithms/maze_escape/test-unit/test.cpp")
