
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_parser_ParserDelegator$gnuParser__
#define __javax_swing_text_html_parser_ParserDelegator$gnuParser__

#pragma interface

#include <gnu/javax/swing/text/html/parser/support/Parser.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
          namespace parser
          {
              class DTD;
              class ParserDelegator;
              class ParserDelegator$gnuParser;
              class TagElement;
          }
        }
      }
    }
  }
}

class javax::swing::text::html::parser::ParserDelegator$gnuParser : public ::gnu::javax::swing::text::html::parser::support::Parser
{

  ParserDelegator$gnuParser(::javax::swing::text::html::parser::ParserDelegator *, ::javax::swing::text::html::parser::DTD *);
public: // actually protected
  virtual void handleComment(JArray< jchar > *);
  virtual void handleEmptyTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleEndTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleError(jint, ::java::lang::String *);
  virtual void handleStartTag(::javax::swing::text::html::parser::TagElement *);
  virtual void handleText(JArray< jchar > *);
public: // actually package-private
  virtual ::javax::swing::text::html::parser::DTD * getDTD();
  ParserDelegator$gnuParser(::javax::swing::text::html::parser::ParserDelegator *, ::javax::swing::text::html::parser::DTD *, ::javax::swing::text::html::parser::ParserDelegator$gnuParser *);
private:
  static const jlong serialVersionUID = 1LL;
public: // actually package-private
  ::javax::swing::text::html::parser::ParserDelegator * __attribute__((aligned(__alignof__( ::gnu::javax::swing::text::html::parser::support::Parser)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_parser_ParserDelegator$gnuParser__