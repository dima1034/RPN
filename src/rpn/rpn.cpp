#include "nodes/all.h"
#include "rpn.h"

namespace RPN
{
	void initialize()
	{
		double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679 ;
		double e  = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;
		
		
		Context::ROOT = new Context(NULL);
		
		Context::ROOT->insert(",", new CommaNode());
		
		Context::ROOT->insert("(", new LeftBracketNode('(', ')'));
		Context::ROOT->insert(")", new RightBracketNode('(', ')'));
		Context::ROOT->insert("[", new LeftBracketNode('[', ']'));
		Context::ROOT->insert("]", new RightBracketNode('[', ']'));
		Context::ROOT->insert("{", new LeftBracketNode('{', '}'));
		Context::ROOT->insert("}", new RightBracketNode('{', '}'));
		
		Context::ROOT->insert("+", new AdditionNode());
		Context::ROOT->insert("-", new SubtractionNode());
		Context::ROOT->insert("*", new MultiplicationNode());
		Context::ROOT->insert("/", new DivisionNode());
		Context::ROOT->insert("%", new ModuloNode());
	//	Context::ROOT->insert("~", new NegationNode());
		Context::ROOT->insert("^", new ExponentiationNode());
	//	Context::ROOT->insert("!", new FactorialNode());
		
		Context::ROOT->insert("pow", new PowerNode());
		Context::ROOT->insert("exp", new ExponentialNode());
		Context::ROOT->insert("root", new RootNode());
		Context::ROOT->insert("sqrt", new SquareRootNode());
		
		Context::ROOT->insert("ln", new NaturalLogarithmNode());
		Context::ROOT->insert("log", new LogarithmNode());
		Context::ROOT->insert("log2", new BinaryLogarithmNode());
		Context::ROOT->insert("log10", new DecadicLogarithmNode());
		
		Context::ROOT->insert("sin", new SineNode());
		Context::ROOT->insert("cos", new CosineNode());
		Context::ROOT->insert("tan", new TangentNode());
	//	Context::ROOT->insert("csc", new CosecantNode());
	//	Context::ROOT->insert("sec", new SecantNode());
	//	Context::ROOT->insert("cot", new CotangentNode());
		
		Context::ROOT->insert("asin", new ArcSineNode());
		Context::ROOT->insert("acos", new ArcCosineNode());
		Context::ROOT->insert("atan", new ArcTangentNode());
	//	Context::ROOT->insert("acsc", new ArcCosecantNode());
	//	Context::ROOT->insert("asec", new ArcSecantNode());
	//	Context::ROOT->insert("acot", new ArcCotangentNode());
		
		Context::ROOT->insert("atan2", new ArcTangent2Node());
	//	Context::ROOT->insert("acot2", new ArcCotangent2Node());
		
		Context::ROOT->insert("pi", new ConstantNode(pi));
		Context::ROOT->insert("e", new ConstantNode(e));
	}
}
