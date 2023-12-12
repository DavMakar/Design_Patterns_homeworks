#include "BoxCollider.hpp"
#include "CapsuleCollider.hpp"
#include "Character.hpp"

int main() {
    BoxCollider boxCollider;
    CapsuleCollider capsuleCollider;

    Character characterWithBoxCollider(&boxCollider);
    Character characterWithCapsuleCollider(&capsuleCollider);

    characterWithBoxCollider.interact();       
    characterWithCapsuleCollider.interact();   

    return 0;
}