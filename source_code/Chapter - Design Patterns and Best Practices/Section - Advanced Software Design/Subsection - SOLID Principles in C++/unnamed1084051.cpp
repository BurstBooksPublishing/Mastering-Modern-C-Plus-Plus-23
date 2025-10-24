class ReportGenerator {
    SqlDatabase db;
public:
    ReportGenerator() : db(SqlDatabase()) {}
    
    void generateReport() {
        auto data = db.query("SELECT * FROM sales");
        // Process data
    }
};