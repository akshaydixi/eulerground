(defn gcd [a b] (def x (max a b)) (def y (min a b)) (if (= 0 (mod x y)) y (gcd y (mod x y))))
(defn lcm [a b] (/ ( * a b) (gcd a b)))
(prn (reduce lcm (range 1 21)))

