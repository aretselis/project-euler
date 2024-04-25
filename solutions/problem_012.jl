function compute_divisors(n)
    end_value = isqrt(n)
    result = 0
    for i in 1:end_value
        if n % i == 0
            result += 2
        end
    end
    if end_value^2 == n
        result -= 1
    end
    return result
end


function compute_solution(number_of_divisors)
    triangle_number = 0
    divisors = 0
    i = 0
    while(divisors < number_of_divisors)
        i += 1
        triangle_number += i
        divisors = compute_divisors(triangle_number)
    end
    return triangle_number
end


desired_divisors = 500
result = compute_solution(desired_divisors)
println("The desired triangle number has a value of ", result)