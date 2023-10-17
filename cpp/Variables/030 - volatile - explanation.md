# Volatile

Like in Java, you can mark a variable as `volatile` to prevent it from being cached in a way that makes it different between threads.  It does not make it atomic though and is not a replacement for mutex locking and such.
