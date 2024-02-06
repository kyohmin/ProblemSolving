/*
Problem Name: 133. Clone Graph
Date        : Feb-06,2024
Link        : https://leetcode.com/problems/clone-graph/description/
Difficulty  : Medium
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> map;
        if(node == nullptr) return nullptr;
        if(node->neighbors.size() == 0){
            Node* original = new Node(node->val);
            return original;
        }

        return dfs(node, map);
    }

    Node* dfs(Node* currentNode, unordered_map<Node*,Node*> &map){
        vector<Node*> neighborVec;
        Node* clone = new Node(currentNode->val);
        map[currentNode] = clone;

        for(auto it:currentNode->neighbors){
            if(map.find(it) != map.end()) neighborVec.push_back(map[it]);
            else neighborVec.push_back(dfs(it,map));
        }
        clone -> neighbors = neighborVec;

        return clone;
    }
};

/*
[Self Reflection]
    How the solution works:
        1. Create Map matched with old <=> new.
        2. Create copy of current node and add it to the map.
        3. Create vector for current Node's neighbors
        4. Add the previous node to current Node's neighbor vector.
        5. Add the dfs(unfound neighbor) to the current Node's neighbot vector.
        6. Repeat

    Why I failed to solve:
        1. Did not know how to connect the previous node and depth node to the current node.
*/