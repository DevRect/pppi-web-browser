#ifndef HTML_PARSER_H
#define HTML_PARSER_H

#include <QString>

class HtmlParser {
public:
    HtmlParser();
    void parse(const QString& htmlContent);
    // Методы для построения DOM-дерева можно добавить позже
};

#endif // HTML_PARSER_H