const sol = (N) => {
    const col = new Array(N).fill(0);
    let total = 0;

    // Level행 x열에 퀸을 둘 수 있는지 판단하기 위해,
    // 0 ~ level-1행까지 상하좌우+대각선 까지 조회
    function check(level, x) {
        for (let i = 0; i < level; i++) {
            if ((x === col[i]) || (Math.abs(x - col[i]) === level - i)) return false;
        }
        return true;
    }

    function nqueen(x) {
        if (x === N) {
            total++;
            return ;
        }
        else {
            for (let i = 0; i < N; i++) {
                if (check(x)) {
                    col[x] = i;
                    nqueen(x+1);
                }
            }
        }
    }

    nqueen(0);
    return total;
};

const input = [];
require("readLine")
    .createInterface(process.stdin, process.stdout)
    .on("line", (line) => {
        console.log(sol(+line));
    })
    .on("close", () => {
        process.exit();
    });