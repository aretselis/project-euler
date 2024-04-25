function is_pentagonal(number)
    return isinteger((sqrt(24*number+1)+1)/6)
end

function is_triangle(number)
    return isinteger((sqrt(8*number+1)-1)/2)
end

function compute_hexagonal_number(n)
    return n*((2*n)-1)
end

function compute_solution_above_hexagonal(n)
    number = compute_hexagonal_number(n)
    while (!is_triangle(number) || !is_pentagonal(number))
        n += 1
        number = compute_hexagonal_number(n)
    end
    return number
end

above = 144
result = compute_solution_above_hexagonal(above)
println(result)