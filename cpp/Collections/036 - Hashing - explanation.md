# Hashing

Hashing in the C++ standard library is done via a `std::hash` template structure.  The template arg determines which specialization of the struct you get, and then you create an instance and call it like a function to do the hashing.

To implement hashing for your class, you provide your own specialization and then internally do __xor__ between hashes of members.
