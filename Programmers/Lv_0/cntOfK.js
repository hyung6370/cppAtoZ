const solution = (i, j, k) => [...Array(j-i+1)
    .fill(0).map((a, idx) => (i+idx)+'').join("")]
    .filter(a => a === (k+'')).length;