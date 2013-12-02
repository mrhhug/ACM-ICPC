package commonsmenue;

import org.mozilla.javascript.ScriptableObject;

//http://jrfom.com/2013/01/23/javascript-via-java-on-the-back-of-a-rhino/
//http://jrfom.com/2013/01/23/javascript-via-java-on-the-back-of-a-rhino/
public class Foo extends ScriptableObject {
    private String bar;
    
    public Foo() {}
    @Override
    public String getClassName() {
        return "Foo";
    }
    
    public void jsConstructor() {
        this.bar = "";
    };
    
    public void jsSet_bar(String value) {
        this.bar = value;
    }
    
    public String jsGet_bar() {
        return this.bar;
    }
}