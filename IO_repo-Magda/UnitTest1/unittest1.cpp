#include "stdafx.h"
#include "CppUnitTest.h"
#include "../IOproject/CommentManagement.h"
#include "../IOproject/Comment.h"
#include "../IOproject/Comment.cpp"
#include "../IOproject/CommentManagement.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestAddComment)
		{
			CommentManagement commentmng;
			Comment t = commentmng.addComment("test", 1, 1);
			Assert::IsNotNull(&t);

		}
		
		TEST_METHOD(TestGetCommentCount)
		{
			CommentManagement *commentmng = new CommentManagement;
			int count = commentmng->getCommentCount();
			Assert::IsNotNull(&count);
		}
		TEST_METHOD(TestGetLastCommentId)
		{
			CommentManagement *commentmng = new CommentManagement;
			int count = commentmng->getLastCommentId();
			Assert::IsNotNull(&count);
		}
	};
	TEST_CLASS1(UnitTest1)
	{
	public:
		TEST_METHOD(TestInitiate)
		{
			User user("User123","password","Daniel","Bialys","mpgh@copypaste.ro",false);
			User(string username,string password,string name,string surname,string email,bool manager);
			Panel panel();
			panel::initiate(user);
		}
	};
}