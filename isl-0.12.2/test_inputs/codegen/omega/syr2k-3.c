for (int c0 = 1; c0 <= min(2 * b - 1, n); c0 += 1)
  for (int c1 = -b + 1; c1 <= b - c0; c1 += 1)
    for (int c2 = max(c0 + c1, 1); c2 <= min(n + c1, n); c2 += 1)
      s0(-c0 - c1 + c2 + 1, -c1 + c2, c2);
