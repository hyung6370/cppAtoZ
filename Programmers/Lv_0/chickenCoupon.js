function solution(chicken) {
    let coupon = chicken;
    let service = 0;

    while (coupon >= 10) {
        service += coupon / 10 << 0
        coupon = coupon % 10 + coupon / 10 << 0
    }
    return service;
}