using Dates

function compute_sundays(start_date, end_date)
    current_date = start_date
    answer = 0
    while(current_date < end_date)
        if Dates.dayname(current_date) == "Sunday" && Dates.day(current_date) == 1
            answer += 1
        end
        current_date += Day(1)
    end
    return answer
end

start_date = DateTime(1901, 1, 1)
end_date = DateTime(2000, 12, 31)
result = compute_sundays(start_date, end_date)
println("There were ", result, " Sundays in the twentieth century.")