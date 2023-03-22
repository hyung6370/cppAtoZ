function fac(n) {
    let bigN = BigInt(n);

    if (bigN === BigInt(1) || bigN === BigInt(0)) {
        return BigInt(1);
    }

    return bigN * fac(bigN - BigInt(1));
}

function solution(balls, share) {
    const n = balls;
    const m = share;

    return fac(n) / (fac(n-m) * fac(m));
}