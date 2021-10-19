#pragma once
#include <string>
#include <string>
#include <vector>
#include <map>
#include "pugixml.hpp"
#include <iostream>
#include <fstream>

using namespace pugi;
using namespace std;


//using  namespace  pugi;
class MyFile
{
public:
	MyFile();
	~MyFile();

	map<string, xml_document> m_mapAllfile;
	map<string, string>  mapText;
	map<string, string>  mapwithID;
	string m_strCurrentfile;
	xml_node m_xmlNode;
	string m_log;
	int push_backDocument(string strfile);
	bool getNodeClassName(string sValue, string sClass, string strVcdItemIdent = "");
	xml_node	&findNodeFromID(string strId);
	string getPresentertatic(string strpath,string strID);
	string odxFromClassNameGetText(string strClass, xml_node xmlnode, vector<string> &Vec);
	string odxFromClassGetVec(string strClass, xml_node xmlnode);
	xml_node &findNodeFromUniqueKey(string UniqueKey);
	string odxGetTextFromChildren(xml_node xmltem);
	string BenzFindTextNew(string strStr);//在新的文本库中读取文本
	int gettext();
	int		SeparatorString(string strSrc, string strSeparator, vector<string> &vctString);//拆分字符串
	string	myReplace(string& str, string original, string sReplace);
	string odxGetEnable(xml_node xml);


//	string m_logsgs;
};