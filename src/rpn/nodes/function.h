#ifndef RPN_NODES_FUNCTION_H
#define RPN_NODES_FUNCTION_H

#include "../node.h"

namespace RPN
{
	class FunctionNode : public Node
	{
	protected:
		int mArguments;
		
	public:
		FunctionNode(int args);
		
		virtual int  arguments() const;
		virtual void translate(Translator& translator) const;
	};
}

#endif
