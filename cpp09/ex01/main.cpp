/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabound <jsabound@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:19:19 by jsabound          #+#    #+#             */
/*   Updated: 2023/12/15 18:14:03 by jsabound         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	evaluateRPN(const std::string &expression)
{
	int	operand2;
	int	operand1;

	std::stack<int> operandStack;
	std::istringstream iss(expression);
	std::string token;
	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			for (int i = 0; token[i]; i++)
			{
				if (token.find_first_not_of("0123456789") != std::string::npos)
				{
					std::cerr << "Error: invalid input" << std::endl;
					exit (1);
				}
			}
			operandStack.push(atoi(token.c_str()));
			if (operandStack.top() > 9)
			{
				std::cerr << "Error: number > 9" << std::endl;
				exit (1);
			}
		}
		else if (token.size() == 1 && strchr("+-*/", token[0]))
		{
			if (operandStack.size() < 2)
			{
				std::cerr << "Error: Not enough operands for operator " << token << std::endl;
				exit(1);
			}
			operand2 = operandStack.top();
			operandStack.pop();
			operand1 = operandStack.top();
			operandStack.pop();
			switch (token[0])
			{
			case '+':
				operandStack.push(operand1 + operand2);
				break ;
			case '-':
				operandStack.push(operand1 - operand2);
				break ;
			case '*':
				operandStack.push(operand1 * operand2);
				break ;
			case '/':
				if (operand2 == 0)
				{
					std::cerr << "Error: Division by zero" << std::endl;
					exit(1);
				}
				operandStack.push(operand1 / operand2);
				break ;
			}
		}
		else
		{
			std::cerr << "Error: not valid expression" << std::endl;
			exit(1);
		}
	}
	if (operandStack.size() == 1)
	{
		return (operandStack.top());
	}
	else
	{
		std::cerr << "Error: Invalid expression" << std::endl;
		exit(1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " \"RPN expression\"" << std::endl;
		return (1);
	}
	std::string rpnExpression = argv[1];
	int result = evaluateRPN(rpnExpression);
	std::cout << result << std::endl;

	return (0);
}
